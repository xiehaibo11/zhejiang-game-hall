.class Lcom/cmic/gen/sdk/auth/c$1;
.super Lcom/cmic/gen/sdk/e/n$a;
.source "AuthnHelperCore.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/auth/c;-><init>(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/auth/c;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/auth/c;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/c$1;->a:Lcom/cmic/gen/sdk/auth/c;

    invoke-direct {p0}, Lcom/cmic/gen/sdk/e/n$a;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 3

    const-string v0, "AID"

    const-string v1, ""

    .line 73
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 74
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "aid = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AuthnHelperCore"

    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 76
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/c$1;->a:Lcom/cmic/gen/sdk/auth/c;

    invoke-static {v0}, Lcom/cmic/gen/sdk/auth/c;->a(Lcom/cmic/gen/sdk/auth/c;)V

    .line 78
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/c$1;->a:Lcom/cmic/gen/sdk/auth/c;

    iget-object v0, v0, Lcom/cmic/gen/sdk/auth/c;->b:Landroid/content/Context;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/b;->a(Landroid/content/Context;Z)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "\u751f\u6210androidkeystore\u6210\u529f"

    .line 79
    invoke-static {v2, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, "\u751f\u6210androidkeystore\u5931\u8d25"

    .line 81
    invoke-static {v2, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
