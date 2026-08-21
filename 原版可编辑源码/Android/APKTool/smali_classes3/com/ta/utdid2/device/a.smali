.class public Lcom/ta/utdid2/device/a;
.super Ljava/lang/Object;
.source "SourceFile"


# instance fields
.field private a:J

.field private b:J

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 10
    iput-object v0, p0, Lcom/ta/utdid2/device/a;->c:Ljava/lang/String;

    .line 11
    iput-object v0, p0, Lcom/ta/utdid2/device/a;->d:Ljava/lang/String;

    .line 12
    iput-object v0, p0, Lcom/ta/utdid2/device/a;->e:Ljava/lang/String;

    .line 13
    iput-object v0, p0, Lcom/ta/utdid2/device/a;->f:Ljava/lang/String;

    const-wide/16 v0, 0x0

    .line 14
    iput-wide v0, p0, Lcom/ta/utdid2/device/a;->a:J

    .line 15
    iput-wide v0, p0, Lcom/ta/utdid2/device/a;->b:J

    return-void
.end method


# virtual methods
.method a()J
    .locals 2

    .line 26
    iget-wide v0, p0, Lcom/ta/utdid2/device/a;->a:J

    return-wide v0
.end method

.method a(J)V
    .locals 0

    .line 22
    iput-wide p1, p0, Lcom/ta/utdid2/device/a;->b:J

    return-void
.end method

.method b(J)V
    .locals 0

    .line 30
    iput-wide p1, p0, Lcom/ta/utdid2/device/a;->a:J

    return-void
.end method

.method b(Ljava/lang/String;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/ta/utdid2/device/a;->e:Ljava/lang/String;

    return-void
.end method

.method c(Ljava/lang/String;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/ta/utdid2/device/a;->f:Ljava/lang/String;

    return-void
.end method

.method public getDeviceId()Ljava/lang/String;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/ta/utdid2/device/a;->e:Ljava/lang/String;

    return-object v0
.end method

.method public getImei()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/ta/utdid2/device/a;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getImsi()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/ta/utdid2/device/a;->d:Ljava/lang/String;

    return-object v0
.end method

.method public getUtdid()Ljava/lang/String;
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/ta/utdid2/device/a;->f:Ljava/lang/String;

    return-object v0
.end method

.method setImei(Ljava/lang/String;)V
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/ta/utdid2/device/a;->c:Ljava/lang/String;

    return-void
.end method

.method setImsi(Ljava/lang/String;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/ta/utdid2/device/a;->d:Ljava/lang/String;

    return-void
.end method
