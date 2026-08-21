.class final Lcom/ss/android/download/api/clean/q$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable$Creator;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/download/api/clean/q;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/os/Parcelable$Creator<",
        "Lcom/ss/android/download/api/clean/q;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 147
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public synthetic createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;
    .locals 0

    .line 147
    invoke-virtual {p0, p1}, Lcom/ss/android/download/api/clean/q$1;->rg(Landroid/os/Parcel;)Lcom/ss/android/download/api/clean/q;

    move-result-object p1

    return-object p1
.end method

.method public synthetic newArray(I)[Ljava/lang/Object;
    .locals 0

    .line 147
    invoke-virtual {p0, p1}, Lcom/ss/android/download/api/clean/q$1;->rg(I)[Lcom/ss/android/download/api/clean/q;

    move-result-object p1

    return-object p1
.end method

.method public rg(Landroid/os/Parcel;)Lcom/ss/android/download/api/clean/q;
    .locals 1

    .line 150
    new-instance v0, Lcom/ss/android/download/api/clean/q;

    invoke-direct {v0, p1}, Lcom/ss/android/download/api/clean/q;-><init>(Landroid/os/Parcel;)V

    return-object v0
.end method

.method public rg(I)[Lcom/ss/android/download/api/clean/q;
    .locals 0

    .line 155
    new-array p1, p1, [Lcom/ss/android/download/api/clean/q;

    return-object p1
.end method
