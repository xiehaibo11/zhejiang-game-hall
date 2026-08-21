.class Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;
.super Ljava/lang/Object;
.source "IPluginServiceServer.java"

# interfaces
.implements Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Proxy"
.end annotation


# static fields
.field public static sDefaultImpl:Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;


# instance fields
.field private mRemote:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 183
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 184
    iput-object p1, p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 188
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-object v0
.end method

.method public bindService(Landroid/content/Intent;Lcom/qihoo360/loader2/mgr/IServiceConnection;ILandroid/os/Messenger;)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 269
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 270
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    .line 273
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    .line 275
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 276
    invoke-virtual {p1, v0, v3}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 279
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_0
    if-eqz p2, :cond_1

    .line 281
    invoke-interface {p2}, Lcom/qihoo360/loader2/mgr/IServiceConnection;->asBinder()Landroid/os/IBinder;

    move-result-object v4

    goto :goto_1

    :cond_1
    const/4 v4, 0x0

    :goto_1
    invoke-virtual {v0, v4}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 282
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeInt(I)V

    if-eqz p4, :cond_2

    .line 284
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 285
    invoke-virtual {p4, v0, v3}, Landroid/os/Messenger;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_2

    .line 288
    :cond_2
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 290
    :goto_2
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v4, 0x3

    invoke-interface {v2, v4, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_3

    .line 291
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 292
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->bindService(Landroid/content/Intent;Lcom/qihoo360/loader2/mgr/IServiceConnection;ILandroid/os/Messenger;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 298
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 299
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 294
    :cond_3
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 295
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 298
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 299
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 298
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 299
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public dump()Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 326
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 327
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    .line 330
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 331
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x5

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 332
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 333
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->dump()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 339
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 340
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 335
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 336
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 339
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 340
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 339
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 340
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1

    const-string v0, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    return-object v0
.end method

.method public startService(Landroid/content/Intent;Landroid/os/Messenger;)Landroid/content/ComponentName;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 196
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 197
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    .line 200
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    .line 202
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 203
    invoke-virtual {p1, v0, v3}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 206
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_0
    if-eqz p2, :cond_1

    .line 209
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 210
    invoke-virtual {p2, v0, v3}, Landroid/os/Messenger;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_1

    .line 213
    :cond_1
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 215
    :goto_1
    iget-object v4, p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    invoke-interface {v4, v2, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_2

    .line 216
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 217
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->startService(Landroid/content/Intent;Landroid/os/Messenger;)Landroid/content/ComponentName;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 228
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 229
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 219
    :cond_2
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 220
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_3

    .line 221
    sget-object p1, Landroid/content/ComponentName;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, v1}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/ComponentName;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :cond_3
    const/4 p1, 0x0

    .line 228
    :goto_2
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 229
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 228
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 229
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public stopService(Landroid/content/Intent;Landroid/os/Messenger;)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 235
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 236
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    .line 239
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    .line 241
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 242
    invoke-virtual {p1, v0, v3}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 245
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_0
    if-eqz p2, :cond_1

    .line 248
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 249
    invoke-virtual {p2, v0, v3}, Landroid/os/Messenger;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_1

    .line 252
    :cond_1
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 254
    :goto_1
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v4, 0x2

    invoke-interface {v2, v4, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_2

    .line 255
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 256
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->stopService(Landroid/content/Intent;Landroid/os/Messenger;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 262
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 263
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 258
    :cond_2
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 259
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 262
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 263
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 262
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 263
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public unbindService(Lcom/qihoo360/loader2/mgr/IServiceConnection;)Z
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
    const-string v2, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    .line 309
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 310
    invoke-interface {p1}, Lcom/qihoo360/loader2/mgr/IServiceConnection;->asBinder()Landroid/os/IBinder;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 311
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x4

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 312
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 313
    invoke-static {}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->unbindService(Lcom/qihoo360/loader2/mgr/IServiceConnection;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 319
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 320
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 315
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 316
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_2

    const/4 v4, 0x1

    .line 319
    :cond_2
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 320
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 319
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 320
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method
