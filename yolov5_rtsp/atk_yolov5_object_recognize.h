#ifndef _ATK_YOLOV5_OBJECT_RECOGNIZE_H
#define _ATK_YOLOV5_OBJECT_RECOGNIZE_H

#include <getopt.h>
#include <math.h>
#include <pthread.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <malloc.h>
#include <dlfcn.h>

#define _BASETSD_H

#include "im2d.h"
#include "rga.h"
#include "rga_func.h"
#include "rknn_api.h"
#include "rkmedia_api.h"
#include "postprocess.h"
#include "sample_common.h"
#include "opencv2/opencv.hpp"

#define disp_width 1920
#define disp_height 1080
#define video_width 1920
#define video_height 1080

static bool quit = false;

int rgb24_resize(unsigned char *input_rgb, unsigned char *output_rgb, int width,int height, int outwidth, int outheight);

static unsigned char *load_model(const char *filename, int *model_size);

static void printRKNNTensor(rknn_tensor_attr *attr);

void *rkmedia_rknn_thread(void *args);

#endif