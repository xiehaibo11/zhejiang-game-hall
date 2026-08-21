.class public Lcom/ss/android/download/api/clean/q;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/download/api/clean/q;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field protected df:Ljava/lang/String;

.field pt:Z

.field protected q:J

.field private rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 147
    new-instance v0, Lcom/ss/android/download/api/clean/q$1;

    invoke-direct {v0}, Lcom/ss/android/download/api/clean/q$1;-><init>()V

    sput-object v0, Lcom/ss/android/download/api/clean/q;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 2

    .line 140
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 141
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/clean/q;->df:Ljava/lang/String;

    .line 142
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/download/api/clean/q;->q:J

    .line 143
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/clean/q;->rg:Ljava/lang/String;

    .line 144
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/ss/android/download/api/clean/q;->pt:Z

    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 134
    iget-object p2, p0, Lcom/ss/android/download/api/clean/q;->df:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 135
    iget-wide v0, p0, Lcom/ss/android/download/api/clean/q;->q:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 136
    iget-object p2, p0, Lcom/ss/android/download/api/clean/q;->rg:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 137
    iget-boolean p2, p0, Lcom/ss/android/download/api/clean/q;->pt:Z

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    return-void
.end method
