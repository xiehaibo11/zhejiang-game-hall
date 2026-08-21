.class public Lcom/ss/android/download/api/clean/pp;
.super Lcom/ss/android/download/api/clean/q;

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/download/api/clean/pp;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private c:Z

.field private fw:Ljava/lang/String;

.field private pp:Ljava/lang/String;

.field private rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 112
    new-instance v0, Lcom/ss/android/download/api/clean/pp$1;

    invoke-direct {v0}, Lcom/ss/android/download/api/clean/pp$1;-><init>()V

    sput-object v0, Lcom/ss/android/download/api/clean/pp;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 65
    invoke-direct {p0}, Lcom/ss/android/download/api/clean/q;-><init>()V

    const-string v0, "clean_file"

    .line 34
    iput-object v0, p0, Lcom/ss/android/download/api/clean/pp;->fw:Ljava/lang/String;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 2

    .line 105
    invoke-direct {p0}, Lcom/ss/android/download/api/clean/q;-><init>()V

    const-string v0, "clean_file"

    .line 34
    iput-object v0, p0, Lcom/ss/android/download/api/clean/pp;->fw:Ljava/lang/String;

    .line 106
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/clean/pp;->rg:Ljava/lang/String;

    .line 107
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/clean/pp;->pp:Ljava/lang/String;

    .line 108
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    iput-boolean v1, p0, Lcom/ss/android/download/api/clean/pp;->c:Z

    .line 109
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/download/api/clean/pp;->fw:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public rg()Ljava/lang/String;
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/ss/android/download/api/clean/pp;->fw:Ljava/lang/String;

    return-object v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 99
    iget-object p2, p0, Lcom/ss/android/download/api/clean/pp;->rg:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 100
    iget-object p2, p0, Lcom/ss/android/download/api/clean/pp;->pp:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 101
    iget-boolean p2, p0, Lcom/ss/android/download/api/clean/pp;->c:Z

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 102
    iget-object p2, p0, Lcom/ss/android/download/api/clean/pp;->fw:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return-void
.end method
