.class final Lcom/tkay/expressad/d/b/a$1;
.super Lcom/tkay/expressad/foundation/g/f/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/d/b/a;->a(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic e:Lcom/tkay/expressad/d/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/d/b/a;Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/tkay/expressad/d/b/a$1;->e:Lcom/tkay/expressad/d/b/a;

    iput-object p2, p0, Lcom/tkay/expressad/d/b/a$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/f/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 59
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/d/b/a$1;->e:Lcom/tkay/expressad/d/b/a;

    invoke-static {v0, p1}, Lcom/tkay/expressad/d/b/a;->a(Lcom/tkay/expressad/d/b/a;Ljava/lang/String;)Ljava/lang/String;

    .line 61
    iget-object v0, p0, Lcom/tkay/expressad/d/b/a$1;->e:Lcom/tkay/expressad/d/b/a;

    invoke-static {v0, p1}, Lcom/tkay/expressad/d/b/a;->b(Lcom/tkay/expressad/d/b/a;Ljava/lang/String;)V

    .line 62
    invoke-static {}, Lcom/tkay/expressad/foundation/a/a/a;->a()Lcom/tkay/expressad/foundation/a/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/d/b/a$1;->a:Ljava/lang/String;

    const-string v1, "MraidJSController"

    invoke-virtual {p1, v1, v0}, Lcom/tkay/expressad/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final f()V
    .locals 0

    return-void
.end method
