.class public Lcom/ss/android/download/api/model/q$rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/download/api/model/q;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "rg"
.end annotation


# instance fields
.field private df:Ljava/lang/String;

.field private rg:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic df(Lcom/ss/android/download/api/model/q$rg;)Ljava/lang/String;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/ss/android/download/api/model/q$rg;->df:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic rg(Lcom/ss/android/download/api/model/q$rg;)Ljava/lang/String;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/ss/android/download/api/model/q$rg;->rg:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public rg(Ljava/lang/String;)Lcom/ss/android/download/api/model/q$rg;
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/ss/android/download/api/model/q$rg;->rg:Ljava/lang/String;

    return-object p0
.end method

.method public rg()Lcom/ss/android/download/api/model/q;
    .locals 1

    .line 39
    new-instance v0, Lcom/ss/android/download/api/model/q;

    invoke-direct {v0, p0}, Lcom/ss/android/download/api/model/q;-><init>(Lcom/ss/android/download/api/model/q$rg;)V

    return-object v0
.end method
