#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

static void print_rectangle(uint32_t width, uint32_t height, bool is_solid) {
  if (is_solid) {
    for (uint32_t i = 0; i < height; i++) {
      for (uint32_t j = 0; j < width; j++) {
        printf("%s", "*");
      }
      printf("%s", "\n");
    }
  } else {
    for (uint32_t i = 0; i < height; i++) {
      for (uint32_t j = 0; j < width; j++) {
        if (i == 0 || i == height - 1) {
          for (j = 0; j < width - 1; j++) {
            printf("%s", "*");
          }
        }
        if (j == 0 || j == width - 1) {
          printf("%s", "*");
        } else {
          printf("%s", " ");
        }
      }
      printf("%s", "\n");
    }
  }
  printf("%s", "\n\n");
}

static void print_circle(int32_t radius, bool is_solid) {
  if (is_solid) {
    for (int32_t i = -radius; i < radius; i++) {
      for (int32_t j = -radius; j < radius; j++) {
        if (i * i + j * j < radius * radius) {
          printf("%s", "*");
        } else {
          printf("%s", " ");
        }
      }
      printf("%s", "\n");
    }
    printf("%s", "\n");
  } else {
    for (int32_t i = -radius - 1; i < radius + 1; i++) {
      for (int32_t j = -radius; j <= radius; j++) {
        if (i * i + j * j == radius * radius ||
            i * i + j * j == -radius * radius) {
          printf("%s", "*");
        } else {
          printf("%s", " ");
        }
      }
      printf("%s", "\n");
    }
  }
}

static void print_diamond(uint32_t width, uint32_t height) {
  for (uint32_t i = 0; i < height / 2; i++) {
    for (uint32_t j = 0; j < width; j++) {
      if (j < width / 2 + i && j > width / 2 - i) {
        printf("%s", "*");
      } else {
        printf("%s", " ");
      }
    }
    printf("%s", "\n");
  }
}

static void print_christmas_tree(
    uint32_t tree_width_at_base,
    uint32_t tree_height, 
    uint32_t trunk_width,
    uint32_t trunk_height) 
    {
  for (uint32_t i = 0; i < tree_height; i++) {
    for (uint32_t j = 0; j < tree_width_at_base; j++) {
      if (j < tree_width_at_base / 2 + i && j > tree_width_at_base / 2 - i) {
        printf("%s", "*");
      } else {
        printf("%s", " ");
      }
    }
    printf("%s", "\n");
  }
  for (uint32_t i = 0; i < trunk_height; i++) {
    for (uint32_t j = 0; j < (tree_width_at_base / 2) - (trunk_width / 2);
         j++) {
      printf("%s", " ");
    }
    for (uint32_t k = 0; k < trunk_width; k++) {

      printf("%s", "*");
    }
    printf("%s", "\n");
  }
}

int main(void) {
  print_rectangle(10, 5, true);
  print_rectangle(10, 5, false);
  print_circle(10, true);
  print_circle(10, false);
  print_diamond(10, 10);
  print_christmas_tree(12, 6, 3, 3);
}