.class final Lcom/kwad/sdk/i/a$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/i/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# instance fields
.field private aCU:Ljava/lang/String;

.field private aCV:Ljava/lang/String;

.field private aCW:Ljava/lang/String;

.field private sdkVersion:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "exit&"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/i/a$b;->aCU:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/kwad/sdk/i/a$b;->aCV:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/kwad/sdk/i/a$b;->aCW:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/kwad/sdk/i/a$b;->sdkVersion:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/i/a$b;->a(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/i/a$b;->aCU:Ljava/lang/String;

    return-object p0
.end method

.method private static c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/KsAdSDKImpl;->getSDKVersion()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/i/a$b;->aCV:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    invoke-static {p0, p1, p2, p3}, Lcom/kwad/sdk/i/a$b;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/i/a$b;->aCW:Ljava/lang/String;

    return-object p0
.end method

.method private static eZ(Ljava/lang/String;)Lcom/kwad/sdk/i/a$b;
    .locals 2

    const-string v0, "&"

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    new-instance v0, Lcom/kwad/sdk/i/a$b;

    invoke-direct {v0}, Lcom/kwad/sdk/i/a$b;-><init>()V

    const/4 v1, 0x1

    aget-object v1, p0, v1

    iput-object v1, v0, Lcom/kwad/sdk/i/a$b;->aCU:Ljava/lang/String;

    const/4 v1, 0x2

    aget-object v1, p0, v1

    iput-object v1, v0, Lcom/kwad/sdk/i/a$b;->aCV:Ljava/lang/String;

    const/4 v1, 0x3

    aget-object v1, p0, v1

    iput-object v1, v0, Lcom/kwad/sdk/i/a$b;->aCW:Ljava/lang/String;

    const/4 v1, 0x4

    aget-object p0, p0, v1

    iput-object p0, v0, Lcom/kwad/sdk/i/a$b;->sdkVersion:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic f(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/i/a$b;->sdkVersion:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic fa(Ljava/lang/String;)Lcom/kwad/sdk/i/a$b;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/i/a$b;->eZ(Ljava/lang/String;)Lcom/kwad/sdk/i/a$b;

    move-result-object p0

    return-object p0
.end method
