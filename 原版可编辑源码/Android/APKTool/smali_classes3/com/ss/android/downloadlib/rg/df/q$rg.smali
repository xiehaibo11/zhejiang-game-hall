.class public abstract Lcom/ss/android/downloadlib/rg/df/q$rg;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/downloadlib/rg/df/q;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/rg/df/q;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "rg"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/rg/df/q$rg$rg;
    }
.end annotation


# static fields
.field private static rg:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static rg(Landroid/os/IBinder;)Lcom/ss/android/downloadlib/rg/df/q;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 42
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/rg/df/q$rg;->rg:Ljava/lang/String;

    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 43
    instance-of v1, v0, Lcom/ss/android/downloadlib/rg/df/q;

    if-nez v1, :cond_1

    goto :goto_0

    .line 46
    :cond_1
    check-cast v0, Lcom/ss/android/downloadlib/rg/df/q;

    return-object v0

    .line 44
    :cond_2
    :goto_0
    new-instance v0, Lcom/ss/android/downloadlib/rg/df/q$rg$rg;

    invoke-direct {v0, p0}, Lcom/ss/android/downloadlib/rg/df/q$rg$rg;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method static synthetic rg()Ljava/lang/String;
    .locals 1

    .line 22
    sget-object v0, Lcom/ss/android/downloadlib/rg/df/q$rg;->rg:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic rg(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 22
    sput-object p0, Lcom/ss/android/downloadlib/rg/df/q$rg;->rg:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    const v1, 0x5f4e5446

    if-eq p1, v1, :cond_2

    const/4 v1, 0x0

    if-eq p1, v0, :cond_0

    .line 63
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 55
    :cond_0
    sget-object p1, Lcom/ss/android/downloadlib/rg/df/q$rg;->rg:Ljava/lang/String;

    invoke-virtual {p2, p1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 56
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_1

    .line 57
    sget-object p1, Lcom/ss/android/downloadlib/rg/df/df;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v1, p1

    check-cast v1, Lcom/ss/android/downloadlib/rg/df/df;

    .line 59
    :cond_1
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/downloadlib/rg/df/pt$rg;->rg(Landroid/os/IBinder;)Lcom/ss/android/downloadlib/rg/df/pt;

    move-result-object p1

    invoke-virtual {p0, v1, p1}, Lcom/ss/android/downloadlib/rg/df/q$rg;->rg(Lcom/ss/android/downloadlib/rg/df/df;Lcom/ss/android/downloadlib/rg/df/pt;)V

    .line 60
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v0

    .line 66
    :cond_2
    sget-object p1, Lcom/ss/android/downloadlib/rg/df/q$rg;->rg:Ljava/lang/String;

    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0
.end method
