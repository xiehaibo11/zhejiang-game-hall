.class final Lcom/tkay/basead/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnCancelListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/c;->a(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/c;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/tkay/basead/c$1;->a:Lcom/tkay/basead/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCancel(Landroid/content/DialogInterface;)V
    .locals 0

    .line 86
    iget-object p1, p0, Lcom/tkay/basead/c$1;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;)Lcom/tkay/basead/c$a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 87
    iget-object p1, p0, Lcom/tkay/basead/c$1;->a:Lcom/tkay/basead/c;

    invoke-static {p1}, Lcom/tkay/basead/c;->a(Lcom/tkay/basead/c;)Lcom/tkay/basead/c$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/c$a;->b()V

    :cond_0
    return-void
.end method
