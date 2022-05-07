struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head)
{
  ListNode *prev = nullptr;
  ListNode *currentNode = head;

  while (currentNode != nullptr)
  {
    ListNode *temp = currentNode->next;
    currentNode->next = prev;
    prev = currentNode;
    currentNode = temp;
  }

  return prev;
}

int main()
{
  return 0;
}