#include <stdint.h>
#define GPIOD_BASE   0x40020C00 //mode offset is 0
#define RCC_BASE     0x40023800
#define RCC_AHB1_Adress (0x40023800+0x30)
#define Output_data_Adress (0x40020C00+0x14)
int main(void)
{

	//1-Enable clock
	uint32_t *p_Enclk=(uint32_t *)RCC_AHB1_Adress;
	*p_Enclk |= 0x8;
	//2-set PIN mode
	uint32_t *p_mode=(uint32_t *)GPIOD_BASE;
		*p_mode|=(1<<24);
	//3-Data
	uint32_t *p_dataset=(uint32_t *)Output_data_Adress;
	*p_dataset |=(1<<12);


    while(1){
    }

}
