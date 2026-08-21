.class Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;
.super Lcom/cmic/gen/sdk/e/n$a;
.source "GenAuthnHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->loginAuth(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/auth/GenTokenListener;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/a;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/cmic/gen/sdk/auth/GenTokenListener;

.field final synthetic e:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/auth/GenAuthnHelper;Landroid/content/Context;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/a;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/auth/GenTokenListener;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->e:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iput-object p4, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->a:Lcom/cmic/gen/sdk/a;

    iput-object p5, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->b:Ljava/lang/String;

    iput-object p6, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->c:Ljava/lang/String;

    iput-object p7, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->d:Lcom/cmic/gen/sdk/auth/GenTokenListener;

    invoke-direct {p0, p2, p3}, Lcom/cmic/gen/sdk/e/n$a;-><init>(Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 7

    .line 146
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->e:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iget-object v1, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->a:Lcom/cmic/gen/sdk/a;

    iget-object v2, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->c:Ljava/lang/String;

    iget-object v6, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->d:Lcom/cmic/gen/sdk/auth/GenTokenListener;

    const-string v4, "loginAuth"

    const/4 v5, 0x3

    invoke-virtual/range {v0 .. v6}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/cmic/gen/sdk/auth/GenTokenListener;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 148
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->e:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iget-object v0, v0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/h;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    .line 149
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 150
    iget-object v1, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->a:Lcom/cmic/gen/sdk/a;

    const-string v2, "phonescrip"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->e:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iget-object v1, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$2;->a:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->a(Lcom/cmic/gen/sdk/a;)V

    :cond_1
    return-void
.end method
