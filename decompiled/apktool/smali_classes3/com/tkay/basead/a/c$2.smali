.class final Lcom/tkay/basead/a/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/c;)V
    .locals 0

    .line 899
    iput-object p1, p0, Lcom/tkay/basead/a/c$2;->a:Lcom/tkay/basead/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 902
    iget-object v0, p0, Lcom/tkay/basead/a/c$2;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_0

    .line 903
    iget-object v0, p0, Lcom/tkay/basead/a/c$2;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    invoke-interface {v0}, Lcom/tkay/basead/a/c$b;->c()V

    :cond_0
    return-void
.end method
