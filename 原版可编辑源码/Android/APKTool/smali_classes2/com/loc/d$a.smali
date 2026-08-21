.class public final Lcom/loc/d$a;
.super Landroid/os/Handler;
.source "AmapLocationManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/d;


# direct methods
.method public constructor <init>(Lcom/loc/d;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 6

    const/4 v0, 0x0

    :try_start_0
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    sget-boolean v1, Lcom/loc/fq;->h:Z

    if-eqz v1, :cond_0

    const-string p1, "AMapLocationClient"

    const-string v1, "SERVICE_NOT_AVAILABLE"

    invoke-static {p1, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    iget v1, p1, Landroid/os/Message;->what:I

    const/16 v2, 0xb

    if-eq v1, v2, :cond_7

    const/16 v2, 0xc

    if-eq v1, v2, :cond_6

    const/16 v2, 0x3f3

    const/16 v3, 0xe

    if-eq v1, v2, :cond_5

    packed-switch v1, :pswitch_data_0

    const-wide/32 v2, 0x493e0

    const/16 v4, 0x401

    packed-switch v1, :pswitch_data_1

    packed-switch v1, :pswitch_data_2

    goto :goto_0

    :pswitch_0
    const-string v0, "handleMessage ACTION_COARSE_LOCATIONSUCCESS"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/amap/api/location/AMapLocation;

    invoke-static {v1, p1}, Lcom/loc/d;->b(Lcom/loc/d;Lcom/amap/api/location/AMapLocation;)V

    return-void

    :pswitch_1
    const-string v0, "handleMessage STOP_COARSE_LOCATION"

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->b(Lcom/loc/d;)Lcom/loc/g;

    move-result-object p1

    invoke-virtual {p1}, Lcom/loc/g;->a()V

    return-void

    :pswitch_2
    const-string v0, "handleMessage START_COARSE_LOCATION"

    invoke-static {}, Lcom/loc/ft;->b()V

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->b(Lcom/loc/d;)Lcom/loc/g;

    move-result-object p1

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->b:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1, v1}, Lcom/loc/g;->a(Lcom/amap/api/location/AMapLocationClientOption;)V

    return-void

    :pswitch_3
    const-string v0, "handleMessage ACTION_REBOOT_GPS_LOCATION"

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->d:Lcom/loc/h;

    invoke-virtual {p1}, Lcom/loc/h;->f()Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->d:Lcom/loc/h;

    invoke-virtual {p1}, Lcom/loc/h;->a()V

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->d:Lcom/loc/h;

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->b:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1, v1}, Lcom/loc/h;->a(Lcom/amap/api/location/AMapLocationClientOption;)V

    :cond_1
    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1, v4, v2, v3}, Lcom/loc/d;->a(Lcom/loc/d;IJ)V

    goto :goto_0

    :pswitch_4
    const-string v0, "handleMessage ACTION_DISABLE_BACKGROUND"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1, p1}, Lcom/loc/d;->d(Lcom/loc/d;Landroid/os/Message;)V

    return-void

    :pswitch_5
    const-string v0, "handleMessage ACTION_ENABLE_BACKGROUND"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1, p1}, Lcom/loc/d;->c(Lcom/loc/d;Landroid/os/Message;)V

    return-void

    :pswitch_6
    const-string v0, "handleMessage SET_OPTION"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/amap/api/location/AMapLocationClientOption;

    iput-object p1, v1, Lcom/loc/d;->b:Lcom/amap/api/location/AMapLocationClientOption;

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->b:Lcom/amap/api/location/AMapLocationClientOption;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->j(Lcom/loc/d;)V

    :cond_2
    :goto_0
    return-void

    :pswitch_7
    const-string v0, "handleMessage STOP_GPS_LOCATION"

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->d:Lcom/loc/h;

    invoke-virtual {p1}, Lcom/loc/h;->a()V

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->i(Lcom/loc/d;)V

    return-void

    :pswitch_8
    const-string v0, "handleMessage START_LBS_LOCATION"

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->c(Lcom/loc/d;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->g(Lcom/loc/d;)V

    return-void

    :cond_3
    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->d:Lcom/loc/h;

    invoke-virtual {p1}, Lcom/loc/h;->b()Z

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    const/16 v1, 0x3f8

    const-wide/16 v2, 0x3e8

    invoke-static {p1, v1, v2, v3}, Lcom/loc/d;->a(Lcom/loc/d;IJ)V

    return-void

    :cond_4
    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->h(Lcom/loc/d;)V

    return-void

    :pswitch_9
    const-string v0, "handleMessage START_GPS_LOCATION"

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->d:Lcom/loc/h;

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->b:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1, v1}, Lcom/loc/h;->a(Lcom/amap/api/location/AMapLocationClientOption;)V

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1, v4, v2, v3}, Lcom/loc/d;->a(Lcom/loc/d;IJ)V

    return-void

    :pswitch_a
    const-string v0, "handleMessage ACTION_SAVE_LAST_LOCATION"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1, p1}, Lcom/loc/d;->b(Lcom/loc/d;Landroid/os/Message;)V

    return-void

    :pswitch_b
    const-string v0, "handleMessage REMOVE_LISTENER"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/amap/api/location/AMapLocationListener;

    invoke-static {v1, p1}, Lcom/loc/d;->b(Lcom/loc/d;Lcom/amap/api/location/AMapLocationListener;)V

    return-void

    :pswitch_c
    const-string p1, "handleMessage STOP_LOCATION"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1}, Lcom/loc/d;->f(Lcom/loc/d;)V

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1, v3, v0}, Lcom/loc/d;->a(Lcom/loc/d;ILandroid/os/Bundle;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :pswitch_d
    :try_start_2
    const-string p1, "handleMessage START_LOCATION"
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1}, Lcom/loc/d;->e(Lcom/loc/d;)V

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    const/16 v2, 0xd

    invoke-static {v1, v2, v0}, Lcom/loc/d;->a(Lcom/loc/d;ILandroid/os/Bundle;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    move-object v5, v0

    move-object v0, p1

    move-object p1, v5

    goto :goto_1

    :pswitch_e
    :try_start_4
    const-string v0, "handleMessage SET_LISTENER"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/amap/api/location/AMapLocationListener;

    invoke-static {v1, p1}, Lcom/loc/d;->a(Lcom/loc/d;Lcom/amap/api/location/AMapLocationListener;)V

    return-void

    :cond_5
    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {p1, v3, v0}, Lcom/loc/d;->a(Lcom/loc/d;ILandroid/os/Bundle;)V

    const-string v0, "handleMessage DESTROY"

    iget-object p1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-virtual {p1}, Lcom/loc/d;->g()V

    return-void

    :cond_6
    const-string v0, "handleMessage ACTION_GPS_LOCATIONSUCCESS"

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1, p1}, Lcom/loc/d;->a(Lcom/loc/d;Landroid/os/Message;)V

    return-void

    :cond_7
    const-string v0, "handleMessage ACTION_LBS_LOCATIONSUCCES"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    iget-object v1, p0, Lcom/loc/d$a;->a:Lcom/loc/d;

    invoke-static {v1, p1}, Lcom/loc/d;->a(Lcom/loc/d;Landroid/os/Bundle;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    return-void

    :catchall_1
    move-exception p1

    :goto_1
    if-nez v0, :cond_8

    const-string v0, "handleMessage"

    :cond_8
    const-string v1, "AMapLocationManage$MHandlerr"

    invoke-static {p1, v1, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x3ea
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x3f6
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
    .end packed-switch

    :pswitch_data_2
    .packed-switch 0x3ff
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
