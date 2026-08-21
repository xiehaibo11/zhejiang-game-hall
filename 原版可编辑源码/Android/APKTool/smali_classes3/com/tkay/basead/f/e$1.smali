.class final Lcom/tkay/basead/f/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/f/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/f/e;


# direct methods
.method constructor <init>(Lcom/tkay/basead/f/e;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/tkay/basead/f/e$1;->a:Lcom/tkay/basead/f/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 48
    iget-object p1, p0, Lcom/tkay/basead/f/e$1;->a:Lcom/tkay/basead/f/e;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/tkay/basead/f/e;->a(Lcom/tkay/basead/f/e;I)V

    return-void
.end method
