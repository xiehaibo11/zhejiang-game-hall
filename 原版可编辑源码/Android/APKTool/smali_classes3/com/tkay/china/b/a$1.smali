.class final Lcom/tkay/china/b/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/b/a;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/tkay/china/b/a$1;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;Z)V
    .locals 2

    .line 49
    invoke-static {p1}, Lcom/tkay/china/b/a;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_0

    return-void

    .line 52
    :cond_0
    invoke-static {p1}, Lcom/tkay/china/b/a;->b(Ljava/lang/String;)Ljava/lang/String;

    .line 53
    iget-object p2, p0, Lcom/tkay/china/b/a$1;->a:Landroid/content/Context;

    const-string v0, "tkay_sdk"

    const-string v1, "oaid"

    invoke-static {p2, v0, v1, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
