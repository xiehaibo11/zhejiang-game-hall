.class final Lcom/tkay/china/a/a/c$a$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/a/a/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/a/a/c$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private a:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 68
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 69
    iput-object p1, p0, Lcom/tkay/china/a/a/c$a$a;->a:Landroid/os/IBinder;

    return-void
.end method

.method private static c()Ljava/lang/String;
    .locals 1

    const-string v0, "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"

    return-object v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 5

    .line 81
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 82
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"

    .line 86
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 87
    iget-object v2, p0, Lcom/tkay/china/a/a/c$a$a;->a:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 88
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 89
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 91
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 92
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 91
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 92
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 93
    throw v2
.end method

.method public final asBinder()Landroid/os/IBinder;
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/tkay/china/a/a/c$a$a;->a:Landroid/os/IBinder;

    return-object v0
.end method

.method public final b()Z
    .locals 5

    .line 99
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 100
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"

    .line 104
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 105
    iget-object v2, p0, Lcom/tkay/china/a/a/c$a$a;->a:Landroid/os/IBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 106
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 107
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    const/4 v4, 0x1

    .line 109
    :cond_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 110
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception v2

    .line 109
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 110
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 111
    throw v2
.end method
