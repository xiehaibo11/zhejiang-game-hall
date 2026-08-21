.class Lcom/cmic/gen/sdk/auth/c$7;
.super Lcom/cmic/gen/sdk/e/n$a;
.source "AuthnHelperCore.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/auth/c;->a(Landroid/content/Context;Ljava/lang/String;Lcom/cmic/gen/sdk/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/cmic/gen/sdk/a;

.field final synthetic d:Lcom/cmic/gen/sdk/auth/c;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/auth/c;Ljava/lang/String;Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V
    .locals 0

    .line 402
    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/c$7;->d:Lcom/cmic/gen/sdk/auth/c;

    iput-object p2, p0, Lcom/cmic/gen/sdk/auth/c$7;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/cmic/gen/sdk/auth/c$7;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/cmic/gen/sdk/auth/c$7;->c:Lcom/cmic/gen/sdk/a;

    invoke-direct {p0}, Lcom/cmic/gen/sdk/e/n$a;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 4

    .line 406
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/c$7;->a:Ljava/lang/String;

    const-string v1, "200023"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x1f40

    .line 407
    invoke-static {v0, v1}, Landroid/os/SystemClock;->sleep(J)V

    .line 409
    :cond_0
    new-instance v0, Lcom/cmic/gen/sdk/d/d;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/d/d;-><init>()V

    iget-object v1, p0, Lcom/cmic/gen/sdk/auth/c$7;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/cmic/gen/sdk/auth/c$7;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/cmic/gen/sdk/auth/c$7;->c:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0, v1, v2, v3}, Lcom/cmic/gen/sdk/d/d;->a(Landroid/content/Context;Ljava/lang/String;Lcom/cmic/gen/sdk/a;)V

    return-void
.end method
