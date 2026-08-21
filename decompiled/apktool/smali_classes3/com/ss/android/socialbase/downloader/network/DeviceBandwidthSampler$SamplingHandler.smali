.class Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "SamplingHandler"
.end annotation


# static fields
.field private static final MSG_START:I = 0x1

.field static final SAMPLE_TIME:J = 0x3e8L


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;


# direct methods
.method public constructor <init>(Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;Landroid/os/Looper;)V
    .locals 0

    .line 152
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;->this$0:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    .line 153
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3

    .line 158
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 160
    :cond_0
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;->this$0:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->addSample()V

    const-wide/16 v1, 0x3e8

    .line 161
    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;->sendEmptyMessageDelayed(IJ)Z

    :goto_0
    return-void
.end method

.method public startSamplingThread()V
    .locals 1

    const/4 v0, 0x1

    .line 170
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;->sendEmptyMessage(I)Z

    return-void
.end method

.method public stopSamplingThread()V
    .locals 1

    const/4 v0, 0x1

    .line 174
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;->removeMessages(I)V

    return-void
.end method
