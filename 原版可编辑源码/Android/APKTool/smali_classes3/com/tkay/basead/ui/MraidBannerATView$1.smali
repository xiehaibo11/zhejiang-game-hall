.class final Lcom/tkay/basead/ui/MraidBannerATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/MraidContainerView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidBannerATView;->o()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MraidBannerATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MraidBannerATView;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidBannerATView$1;->a:Lcom/tkay/basead/ui/MraidBannerATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 80
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView$1;->a:Lcom/tkay/basead/ui/MraidBannerATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidBannerATView;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView$1;->a:Lcom/tkay/basead/ui/MraidBannerATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/h;->v(Ljava/lang/String;)V

    .line 74
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidBannerATView$1;->a:Lcom/tkay/basead/ui/MraidBannerATView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/MraidBannerATView;->b(I)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method
