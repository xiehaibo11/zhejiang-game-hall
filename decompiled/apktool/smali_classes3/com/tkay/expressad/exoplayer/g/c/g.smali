.class public final Lcom/tkay/expressad/exoplayer/g/c/g;
.super Lcom/tkay/expressad/exoplayer/g/c/b;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/expressad/exoplayer/g/c/g;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public final a:J

.field public final b:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 80
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/c/g$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/g/c/g$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/g/c/g;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method private constructor <init>(JJ)V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/g/c/b;-><init>()V

    .line 40
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/g/c/g;->a:J

    .line 41
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/g/c/g;->b:J

    return-void
.end method

.method synthetic constructor <init>(JJB)V
    .locals 0

    .line 28
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/exoplayer/g/c/g;-><init>(JJ)V

    return-void
.end method

.method static a(Lcom/tkay/expressad/exoplayer/k/s;J)J
    .locals 6

    .line 61
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    int-to-long v0, v0

    const-wide/16 v2, 0x80

    and-long/2addr v2, v0

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-eqz v2, :cond_0

    const-wide/16 v2, 0x1

    and-long/2addr v0, v2

    const/16 v2, 0x20

    shl-long/2addr v0, v2

    .line 65
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v2

    or-long/2addr v0, v2

    add-long/2addr v0, p1

    const-wide p0, 0x1ffffffffL

    and-long/2addr p0, v0

    goto :goto_0

    :cond_0
    const-wide p0, -0x7fffffffffffffffL    # -4.9E-324

    :goto_0
    return-wide p0
.end method

.method static a(Lcom/tkay/expressad/exoplayer/k/s;JLcom/tkay/expressad/exoplayer/k/ac;)Lcom/tkay/expressad/exoplayer/g/c/g;
    .locals 1

    .line 46
    invoke-static {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/g/c/g;->a(Lcom/tkay/expressad/exoplayer/k/s;J)J

    move-result-wide p0

    .line 47
    invoke-virtual {p3, p0, p1}, Lcom/tkay/expressad/exoplayer/k/ac;->a(J)J

    move-result-wide p2

    .line 48
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/c/g;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/g/c/g;-><init>(JJ)V

    return-object v0
.end method


# virtual methods
.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 76
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/g;->a:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 77
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/g;->b:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    return-void
.end method
