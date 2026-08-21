.class Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/ttmd5/TTMd5;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "TTMd5Args"
.end annotation


# instance fields
.field private realMd5:Ljava/lang/String;

.field private sampleCount:I

.field private sampleSize:J

.field private versionMain:I

.field private versionSub:I


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 437
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/ttmd5/TTMd5$1;)V
    .locals 0

    .line 437
    invoke-direct {p0}, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;)I
    .locals 0

    .line 437
    iget p0, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->versionMain:I

    return p0
.end method

.method static synthetic access$002(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;I)I
    .locals 0

    .line 437
    iput p1, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->versionMain:I

    return p1
.end method

.method static synthetic access$100(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;)I
    .locals 0

    .line 437
    iget p0, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->sampleCount:I

    return p0
.end method

.method static synthetic access$102(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;I)I
    .locals 0

    .line 437
    iput p1, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->sampleCount:I

    return p1
.end method

.method static synthetic access$200(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;)J
    .locals 2

    .line 437
    iget-wide v0, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->sampleSize:J

    return-wide v0
.end method

.method static synthetic access$202(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;J)J
    .locals 0

    .line 437
    iput-wide p1, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->sampleSize:J

    return-wide p1
.end method

.method static synthetic access$300(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;)I
    .locals 0

    .line 437
    iget p0, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->versionSub:I

    return p0
.end method

.method static synthetic access$302(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;I)I
    .locals 0

    .line 437
    iput p1, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->versionSub:I

    return p1
.end method

.method static synthetic access$400(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;)Ljava/lang/String;
    .locals 0

    .line 437
    iget-object p0, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->realMd5:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$402(Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 437
    iput-object p1, p0, Lcom/ss/android/ttmd5/TTMd5$TTMd5Args;->realMd5:Ljava/lang/String;

    return-object p1
.end method
