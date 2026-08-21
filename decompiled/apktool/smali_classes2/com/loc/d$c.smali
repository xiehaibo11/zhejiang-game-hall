.class public final Lcom/loc/d$c;
.super Landroid/os/Handler;
.source "AmapLocationManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/d;


# direct methods
.method public constructor <init>(Lcom/loc/d;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/loc/d;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-boolean v1, v1, Lcom/loc/d;->q:Z

    if-eqz v1, :cond_0

    return-void

    :cond_0
    iget v1, p1, Landroid/os/Message;->what:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x1

    if-eq v1, v2, :cond_5

    const/4 v2, 0x2

    const/16 v3, 0xd

    if-eq v1, v2, :cond_3

    if-eq v1, v3, :cond_1

    const-string v2, "optBundle"

    packed-switch v1, :pswitch_data_0

    packed-switch v1, :pswitch_data_1

    goto/16 :goto_1

    :pswitch_0
    :try_start_1
    const-string v0, "handleMessage RESULT_COARSE_GEO_SUCCESS"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {v1}, Lcom/loc/d;->b(Lcom/loc/d;)Lcom/loc/g;

    move-result-object v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {v1}, Lcom/loc/d;->b(Lcom/loc/d;)Lcom/loc/g;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/loc/g;->a(Landroid/os/Bundle;)V

    return-void

    :pswitch_1
    const-string v0, "handleMessage RESULT_COARSE_LOCATIONCHANGE"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->b:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-static {v1}, Lcom/loc/fr;->a(Lcom/amap/api/location/AMapLocationClientOption;)Landroid/os/Bundle;

    move-result-object v1

    invoke-virtual {p1, v2, v1}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    const/16 v2, 0xf

    invoke-static {v1, v2, p1}, Lcom/loc/d;->a(Lcom/loc/d;ILandroid/os/Bundle;)V

    return-void

    :pswitch_2
    const/16 v1, 0x86b

    invoke-static {v0, v1}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    :pswitch_3
    const-string v0, "handleMessage RESULT_COARSE_LOCATIONSUCCESS"

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    const/16 v2, 0x404

    iput v2, v1, Landroid/os/Message;->what:I

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    iput-object p1, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->A:Lcom/loc/d$a;

    invoke-virtual {p1, v1}, Lcom/loc/d$a;->sendMessage(Landroid/os/Message;)Z

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->a(Lcom/loc/d;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->a(Lcom/loc/d;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object p1

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->getCacheCallBack()Z

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->c:Lcom/loc/d$c;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->c:Lcom/loc/d$c;

    invoke-virtual {p1, v3}, Lcom/loc/d$c;->removeMessages(I)V

    return-void

    :pswitch_4
    const-string v0, "handleMessage RESULT_LBS_ON_CALLBACK"

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/amap/api/location/AMapLocation;

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {v1, p1}, Lcom/loc/d;->a(Lcom/loc/d;Lcom/amap/api/location/AMapLocation;)V

    return-void

    :pswitch_5
    const-string v0, "handleMessage RESULT_INSTALLED_MOCK_APP"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    const-string v1, "installMockApp"

    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    invoke-static {p1}, Lcom/loc/d;->b(Z)Z

    goto/16 :goto_1

    :pswitch_6
    const/16 v1, 0x85d    # 3.0E-42f

    invoke-static {v0, v1}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    goto :goto_0

    :pswitch_7
    const-string v0, "handleMessage RESULT_NGPS_ABLE"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    const-string v2, "ngpsAble"

    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    invoke-static {v1, p1}, Lcom/loc/d;->b(Lcom/loc/d;Z)Z

    return-void

    :pswitch_8
    const-string v0, "handleMessage RESULT_GPS_GEO_SUCCESS"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->d:Lcom/loc/h;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->d:Lcom/loc/h;

    invoke-virtual {v1, p1}, Lcom/loc/h;->a(Landroid/os/Bundle;)V

    return-void

    :pswitch_9
    const-string v0, "handleMessage RESULT_GPS_LOCATIONCHANGE"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->b:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-static {v1}, Lcom/loc/fr;->a(Lcom/amap/api/location/AMapLocationClientOption;)Landroid/os/Bundle;

    move-result-object v1

    invoke-virtual {p1, v2, v1}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    const/16 v2, 0xa

    invoke-static {v1, v2, p1}, Lcom/loc/d;->a(Lcom/loc/d;ILandroid/os/Bundle;)V

    return-void

    :cond_1
    const-string v0, "handleMessage RESULT_CACHE_CALLBACK"

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->a:Lcom/loc/ew;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->a:Lcom/loc/ew;

    invoke-static {p1, v1}, Lcom/loc/d;->a(Lcom/loc/d;Lcom/amap/api/location/AMapLocation;)V

    return-void

    :cond_2
    new-instance p1, Lcom/amap/api/location/AMapLocation;

    const-string v1, "LBS"

    invoke-direct {p1, v1}, Lcom/amap/api/location/AMapLocation;-><init>(Ljava/lang/String;)V

    const/16 v1, 0x21

    invoke-virtual {p1, v1}, Lcom/amap/api/location/AMapLocation;->setErrorCode(I)V

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {v1, p1}, Lcom/loc/d;->a(Lcom/loc/d;Lcom/amap/api/location/AMapLocation;)V

    return-void

    :cond_3
    :goto_0
    const-string v0, "handleMessage RESULT_GPS_LOCATIONSUCCESS"

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    const/16 v2, 0xc

    iput v2, v1, Landroid/os/Message;->what:I

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    iput-object p1, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->A:Lcom/loc/d$a;

    invoke-virtual {p1, v1}, Lcom/loc/d$a;->sendMessage(Landroid/os/Message;)Z

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->a(Lcom/loc/d;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    invoke-static {p1}, Lcom/loc/d;->a(Lcom/loc/d;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object p1

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->getCacheCallBack()Z

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->c:Lcom/loc/d$c;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->c:Lcom/loc/d$c;

    invoke-virtual {p1, v3}, Lcom/loc/d$c;->removeMessages(I)V

    :cond_4
    :goto_1
    return-void

    :cond_5
    const-string v0, "handleMessage RESULT_LBS_LOCATIONSUCCESS"

    iget-object v1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object v1, v1, Lcom/loc/d;->A:Lcom/loc/d$a;

    invoke-virtual {v1}, Lcom/loc/d$a;->obtainMessage()Landroid/os/Message;

    move-result-object v1

    const/16 v2, 0xb

    iput v2, v1, Landroid/os/Message;->what:I

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    invoke-virtual {v1, p1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    iget-object p1, p0, Lcom/loc/d$c;->a:Lcom/loc/d;

    iget-object p1, p1, Lcom/loc/d;->A:Lcom/loc/d$a;

    invoke-virtual {p1, v1}, Lcom/loc/d$a;->sendMessage(Landroid/os/Message;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    if-nez v0, :cond_6

    const-string v0, "handleMessage"

    :cond_6
    const-string v1, "AmapLocationManager$MainHandler"

    invoke-static {p1, v1, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x5
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x64
        :pswitch_2
        :pswitch_3
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
