.class final Lcom/tkay/expressad/advanced/d/c$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/d/c$1;->onScrollChanged()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/d/c$1;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/d/c$1;)V
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c$1$1;->a:Lcom/tkay/expressad/advanced/d/c$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$1$1;->a:Lcom/tkay/expressad/advanced/d/c$1;

    iget-object v0, v0, Lcom/tkay/expressad/advanced/d/c$1;->a:Lcom/tkay/expressad/advanced/d/c;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/advanced/d/c;Z)Z

    return-void
.end method
