#include "P0.h"

int is_prime( uint32_t x ) {
  if ( !( x & 1 ) || ( x < 2 ) ) {
    return ( x == 2 );
  }

  for( uint32_t d = 3; ( d * d ) <= x ; d += 2 ) {
    if( !( x % d ) ) {
      return 0;
    }
  }

  return 1;
}

void P0() {
  int x = 0;
  //char* xx = "hello world, I'm P0\n";


  while( 1 ) {

    // test whether each x for 2^8 < x < 2^24 is prime or not

    for( uint32_t x = ( 1 << 8 ); x < ( 1 << 24 ); x++ ) {

      int r = is_prime( x ); // printf( "is_prime( %d ) = %d\n", x, r );
      //write( 0, xx, 20 );
      //Attempt to eat if 0 then then eait time and try again
      // if 1 then eat then wait then put down
      //ipcFlag = 1;
      int i = eat();
      //ipcFlag = 0;
      if (i == 0){
          //If hungry
          for (int j=0; j < 200000; j++ ){
              int q = is_prime( j );
          }
      } else if (i == 2) {
          //If eating
          for (int j=0; j < 400000; j++ ){
              int q = is_prime( j );

              //WAIT FOR Time
          }
          putDown();
          //printNum(current->pid);
          //writeStr(" Eaten and thinking");
          for (int j=0; j < 800000; j++ ){
              int q = is_prime( j );

              //WAIT FOR Time
          }
      } else {
          //If picked up one fork
          for (int j=0; j < 400000; j++ ){
              int q = is_prime( j );
          }
      }
    }
  }

  return;
}

void (*entry_P0)() = &P0;
