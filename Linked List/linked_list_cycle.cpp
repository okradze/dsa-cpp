#include <iostream>
#include <unordered_set>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Using O(n) space
// bool hasCycle(ListNode *head)
// {
//   unordered_set<ListNode *> seen;

//   ListNode *currentNode = head;

//   while (currentNode != nullptr)
//   {
//     if (seen.find(currentNode) != seen.end())
//     {
//       return true;
//     }

//     seen.insert(currentNode);
//     currentNode = currentNode->next;
//   }

//   return false;
// }

bool hasCycle(ListNode *head)
{
  if (head == nullptr or head->next == nullptr)
  {
    return false;
  }

  ListNode *slow = head;
  ListNode *fast = head;

  while (fast != nullptr and fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  cout << hasCycle(head) << endl;

  return 0;
}