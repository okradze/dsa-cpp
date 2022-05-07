struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
  ListNode *head = new ListNode(0);
  ListNode *tail = head;

  while (list1 != nullptr or list2 != nullptr)
  {
    if (list1 == nullptr)
    {
      tail->next = list2;
      list2 = list2->next;
      break;
    }
    else if (list2 == nullptr)
    {
      tail->next = list1;
      list1 = list1->next;
      break;
    }
    else if (list1->val <= list2->val)
    {
      tail->next = list1;
      list1 = list1->next;
    }
    else
    {
      tail->next = list2;
      list2 = list2->next;
    }

    tail = tail->next;
  }

  return head->next;
}

int main()
{
  return 0;
}