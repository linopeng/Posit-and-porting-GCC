/* { dg-do compile } */
/* { dg-options "-mhle" } */
/* { dg-final { scan-assembler "lock;?\[ \n\t\]+\(xacquire\|\.byte\[ \t\]+0xf2\)\[ \t\n\]+or" } } */

void
hle_or (int *p, int v)
{
  __atomic_or_fetch (p, 1, __ATOMIC_ACQUIRE | __ATOMIC_HLE_ACQUIRE);
}
