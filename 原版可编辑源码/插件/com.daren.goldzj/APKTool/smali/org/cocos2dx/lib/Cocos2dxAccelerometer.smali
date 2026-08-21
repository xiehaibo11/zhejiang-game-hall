.class public Lorg/cocos2dx/lib/Cocos2dxAccelerometer;
.super Ljava/lang/Object;
.source "Cocos2dxAccelerometer.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxAccelerometer$DeviceMotionEvent;,
        Lorg/cocos2dx/lib/Cocos2dxAccelerometer$RotationRate;,
        Lorg/cocos2dx/lib/Cocos2dxAccelerometer$Acceleration;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "Cocos2dxAccelerometer"


# instance fields
.field private final mContext:Landroid/content/Context;

.field private mDeviceMotionEvent:Lorg/cocos2dx/lib/Cocos2dxAccelerometer$DeviceMotionEvent;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 75
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 69
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxAccelerometer$DeviceMotionEvent;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer$DeviceMotionEvent;-><init>(Lorg/cocos2dx/lib/Cocos2dxAccelerometer;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->mDeviceMotionEvent:Lorg/cocos2dx/lib/Cocos2dxAccelerometer$DeviceMotionEvent;

    .line 76
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->mContext:Landroid/content/Context;

    return-void
.end method

.method public static native onSensorChanged(FFFJ)V
.end method


# virtual methods
.method public disable()V
    .locals 0

    return-void
.end method

.method public enable()V
    .locals 0

    return-void
.end method

.method public getDeviceMotionEvent()Lorg/cocos2dx/lib/Cocos2dxAccelerometer$DeviceMotionEvent;
    .locals 1

    .line 106
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->mDeviceMotionEvent:Lorg/cocos2dx/lib/Cocos2dxAccelerometer$DeviceMotionEvent;

    return-object v0
.end method

.method public setInterval(F)V
    .locals 0

    .line 101
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->disable()V

    .line 102
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->enable()V

    return-void
.end method
