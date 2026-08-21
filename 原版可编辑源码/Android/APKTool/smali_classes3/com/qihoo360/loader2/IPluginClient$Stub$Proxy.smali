.class Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;
.super Ljava/lang/Object;
.source "IPluginClient.java"

# interfaces
.implements Lcom/qihoo360/loader2/IPluginClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/IPluginClient$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Proxy"
.end annotation


# static fields
.field public static sDefaultImpl:Lcom/qihoo360/loader2/IPluginClient;


# instance fields
.field private mRemote:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 236
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 237
    iput-object p1, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public allocActivityContainer(Ljava/lang/String;ILjava/lang/String;Landroid/content/Intent;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 251
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 252
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 255
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 256
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 257
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 258
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p4, :cond_0

    .line 260
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 261
    invoke-virtual {p4, v0, v3}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 264
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 266
    :goto_0
    iget-object v4, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    invoke-interface {v4, v2, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 267
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 268
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/qihoo360/loader2/IPluginClient;->allocActivityContainer(Ljava/lang/String;ILjava/lang/String;Landroid/content/Intent;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 274
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 275
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 270
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 271
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 274
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 275
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 274
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 275
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 241
    iget-object v0, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-object v0
.end method

.method public dumpActivities()Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 470
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 471
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 474
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 475
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xa

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 476
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 477
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginClient;->dumpActivities()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 483
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 484
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 479
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 480
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 483
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 484
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 483
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 484
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public dumpServices()Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 447
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 448
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 451
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 452
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x9

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 453
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 454
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginClient;->dumpServices()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 460
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 461
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 456
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 457
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 460
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 461
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 460
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 461
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 390
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 391
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 394
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 395
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x7

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 396
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 397
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginClient;->fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 403
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 404
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 399
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 400
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 403
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 404
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 403
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 404
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1

    const-string v0, "com.qihoo360.loader2.IPluginClient"

    return-object v0
.end method

.method public onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 417
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 418
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 420
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 421
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 422
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p3, :cond_0

    const/4 v3, 0x1

    .line 424
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 425
    invoke-virtual {p3, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 428
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 430
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x8

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 431
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 432
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3}, Lcom/qihoo360/loader2/IPluginClient;->onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 438
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 439
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 435
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 438
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 439
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 438
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 439
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public queryBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 283
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 284
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 287
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 288
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 289
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 290
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 291
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 292
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginClient;->queryBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 298
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 299
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 294
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 295
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 298
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 299
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 298
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 299
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public releaseBinder()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 305
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 306
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 308
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 309
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x3

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 310
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 311
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginClient;->releaseBinder()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 317
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 318
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 314
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 317
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 318
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception v2

    .line 317
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 318
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public sendIntent(Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 323
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    :try_start_0
    const-string v1, "com.qihoo360.loader2.IPluginClient"

    .line 325
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    .line 327
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 328
    invoke-virtual {p1, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 331
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 333
    :goto_0
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x4

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v4, v1}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v1

    if-nez v1, :cond_1

    .line 334
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 335
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v1

    invoke-interface {v1, p1}, Lcom/qihoo360/loader2/IPluginClient;->sendIntent(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 340
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :cond_1
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public sendIntentSync(Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 345
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 346
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 348
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    const/4 v3, 0x1

    .line 350
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 351
    invoke-virtual {p1, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 354
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 356
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v4, 0x5

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 357
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 358
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginClient;->sendIntentSync(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 364
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 365
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 361
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 364
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 365
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 364
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 365
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public sumActivities()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 370
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 371
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginClient"

    .line 374
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 375
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x6

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 376
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 377
    invoke-static {}, Lcom/qihoo360/loader2/IPluginClient$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginClient;->sumActivities()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 383
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 384
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    .line 379
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 380
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 383
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 384
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception v2

    .line 383
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 384
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method
