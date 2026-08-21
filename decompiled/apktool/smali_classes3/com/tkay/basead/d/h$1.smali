.class final Lcom/tkay/basead/d/h$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/d/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/d/h;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/h;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/tkay/basead/d/h$1;->a:Lcom/tkay/basead/d/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    .line 76
    iget-object v0, p0, Lcom/tkay/basead/d/h$1;->a:Lcom/tkay/basead/d/h;

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;I)V

    return-void
.end method
