extern void _stackTop;

void main(void);
void nmi_handler(void);
void hardfault_handler(void);
//Define the vector table
__attribute__ ((section(".vectors")))
void (* const VectorArray[])(void) = {
  &_stackTop,
  main,
  nmi_handler,
  hardfault_handler,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, //if these zeros are not places, linker will add main() in interrupt vector space
};

//Start of main program
void main(void)
{
  int i = 0;

  while(1)
    i++;

  return;
}

//Dummy handlers
void nmi_handler(void)
{
  while(1);
  return;
}

void hardfault_handler(void)
{
  while(1);
  return;
}
