.class final Lcom/tkay/china/a/b$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/a/b$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/a/b$1;


# direct methods
.method constructor <init>(Lcom/tkay/china/a/b$1;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/tkay/china/a/b$1$1;->a:Lcom/tkay/china/a/b$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 121
    iget-object v0, p0, Lcom/tkay/china/a/b$1$1;->a:Lcom/tkay/china/a/b$1;

    iget-object v0, v0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/china/a/b$1$1;->a:Lcom/tkay/china/a/b$1;

    iget-object v1, v1, Lcom/tkay/china/a/b$1;->a:Lcom/tkay/china/a/a;

    invoke-static {v0, v1}, Lcom/tkay/china/a/b;->b(Landroid/content/Context;Lcom/tkay/china/a/a;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Z)V
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/tkay/china/a/b$1$1;->a:Lcom/tkay/china/a/b$1;

    iget-object v0, v0, Lcom/tkay/china/a/b$1;->a:Lcom/tkay/china/a/a;

    if-eqz v0, :cond_0

    .line 115
    iget-object v0, p0, Lcom/tkay/china/a/b$1$1;->a:Lcom/tkay/china/a/b$1;

    iget-object v0, v0, Lcom/tkay/china/a/b$1;->a:Lcom/tkay/china/a/a;

    invoke-interface {v0, p1, p2}, Lcom/tkay/china/a/a;->a(Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method
