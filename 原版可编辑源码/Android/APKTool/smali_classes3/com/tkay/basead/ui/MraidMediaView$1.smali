.class final Lcom/tkay/basead/ui/MraidMediaView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/MraidContainerView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidMediaView;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MraidMediaView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MraidMediaView;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidMediaView$1;->a:Lcom/tkay/basead/ui/MraidMediaView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView$1;->a:Lcom/tkay/basead/ui/MraidMediaView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidMediaView;->a(Lcom/tkay/basead/ui/MraidMediaView;)Lcom/tkay/basead/ui/MraidMediaView$a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 79
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView$1;->a:Lcom/tkay/basead/ui/MraidMediaView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidMediaView;->a(Lcom/tkay/basead/ui/MraidMediaView;)Lcom/tkay/basead/ui/MraidMediaView$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/ui/MraidMediaView$a;->a()V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView$1;->a:Lcom/tkay/basead/ui/MraidMediaView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidMediaView;->a(Lcom/tkay/basead/ui/MraidMediaView;)Lcom/tkay/basead/ui/MraidMediaView$a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 72
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView$1;->a:Lcom/tkay/basead/ui/MraidMediaView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidMediaView;->a(Lcom/tkay/basead/ui/MraidMediaView;)Lcom/tkay/basead/ui/MraidMediaView$a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/basead/ui/MraidMediaView$a;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method
