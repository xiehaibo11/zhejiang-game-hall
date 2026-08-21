.class public Lcom/ss/android/download/api/clean/pt;
.super Lcom/ss/android/download/api/clean/df;

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/download/api/clean/pt;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private pp:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 91
    new-instance v0, Lcom/ss/android/download/api/clean/pt$1;

    invoke-direct {v0}, Lcom/ss/android/download/api/clean/pt$1;-><init>()V

    sput-object v0, Lcom/ss/android/download/api/clean/pt;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/ss/android/download/api/clean/df;-><init>()V

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/ss/android/download/api/clean/df;-><init>()V

    .line 40
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/download/api/clean/pt;->pp:Ljava/lang/String;

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

    const-string v0, "clean_app_cache"

    return-object v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 88
    iget-object p2, p0, Lcom/ss/android/download/api/clean/pt;->pp:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return-void
.end method
