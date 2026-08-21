.class final Lcom/tkay/basead/a/a$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/a;->b(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/basead/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/a;I)V
    .locals 0

    .line 186
    iput-object p1, p0, Lcom/tkay/basead/a/a$4;->b:Lcom/tkay/basead/a/a;

    iput p2, p0, Lcom/tkay/basead/a/a$4;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 189
    iget-object v0, p0, Lcom/tkay/basead/a/a$4;->b:Lcom/tkay/basead/a/a;

    invoke-static {v0}, Lcom/tkay/basead/a/a;->f(Lcom/tkay/basead/a/a;)Lcom/tkay/basead/a/a$a;

    move-result-object v0

    iget v1, p0, Lcom/tkay/basead/a/a$4;->a:I

    invoke-interface {v0, v1}, Lcom/tkay/basead/a/a$a;->a(I)V

    return-void
.end method
