.class public Lcom/cmic/gen/sdk/c/b/f$b;
.super Lcom/cmic/gen/sdk/c/b/g;
.source "LogReportParameter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/c/b/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 42
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/b/g;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/c/b/f$b;)Ljava/lang/String;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->d:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->d:Ljava/lang/String;

    return-object v0
.end method

.method protected a_(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 74
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->d:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "@Fdiwmxy7CBDDQNUI"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f$b;->e:Ljava/lang/String;

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->e:Ljava/lang/String;

    return-object v0
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f$b;->d:Ljava/lang/String;

    return-void
.end method

.method public d()Ljava/lang/String;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->a:Ljava/lang/String;

    return-object v0
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f$b;->a:Ljava/lang/String;

    return-void
.end method

.method public e()Ljava/lang/String;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->b:Ljava/lang/String;

    return-object v0
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f$b;->b:Ljava/lang/String;

    return-void
.end method

.method public f()Ljava/lang/String;
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$b;->c:Ljava/lang/String;

    return-object v0
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f$b;->c:Ljava/lang/String;

    return-void
.end method
