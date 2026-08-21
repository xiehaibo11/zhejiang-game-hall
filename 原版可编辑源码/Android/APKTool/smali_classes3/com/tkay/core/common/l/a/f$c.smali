.class final Lcom/tkay/core/common/l/a/f$c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/l/a/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/l/a/f;

.field private final b:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Lcom/tkay/core/common/l/a/f;)V
    .locals 0

    .line 271
    iput-object p1, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 272
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/core/common/l/a/f$c;->c:Ljava/util/ArrayList;

    .line 273
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/core/common/l/a/f$c;->b:Ljava/util/ArrayList;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 278
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-static {v0}, Lcom/tkay/core/common/l/a/f;->a(Lcom/tkay/core/common/l/a/f;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :catchall_0
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 279
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    .line 280
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/l/a/f$a;

    iget v3, v3, Lcom/tkay/core/common/l/a/f$a;->a:I

    .line 281
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/l/a/f$a;

    iget v4, v4, Lcom/tkay/core/common/l/a/f$a;->b:I

    .line 282
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/l/a/f$a;

    iget-object v5, v5, Lcom/tkay/core/common/l/a/f$a;->e:Ljava/lang/Integer;

    .line 283
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/l/a/f$a;

    iget-object v1, v1, Lcom/tkay/core/common/l/a/f$a;->d:Landroid/view/View;

    .line 285
    iget-object v6, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-static {v6}, Lcom/tkay/core/common/l/a/f;->b(Lcom/tkay/core/common/l/a/f;)Lcom/tkay/core/common/l/a/f$b;

    move-result-object v6

    invoke-virtual {v6, v1, v2, v3, v5}, Lcom/tkay/core/common/l/a/f$b;->a(Landroid/view/View;Landroid/view/View;ILjava/lang/Integer;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 287
    iget-object v1, p0, Lcom/tkay/core/common/l/a/f$c;->b:Ljava/util/ArrayList;

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 289
    :try_start_0
    invoke-virtual {v2}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    iget-object v2, v2, Lcom/tkay/core/common/l/a/f;->b:Landroid/view/ViewTreeObserver$OnPreDrawListener;

    invoke-virtual {v1, v2}, Landroid/view/ViewTreeObserver;->removeOnPreDrawListener(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 293
    :cond_1
    iget-object v3, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-static {v3}, Lcom/tkay/core/common/l/a/f;->b(Lcom/tkay/core/common/l/a/f;)Lcom/tkay/core/common/l/a/f$b;

    move-result-object v3

    const/4 v5, 0x0

    invoke-virtual {v3, v1, v2, v4, v5}, Lcom/tkay/core/common/l/a/f$b;->a(Landroid/view/View;Landroid/view/View;ILjava/lang/Integer;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 295
    iget-object v1, p0, Lcom/tkay/core/common/l/a/f$c;->c:Ljava/util/ArrayList;

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 299
    :cond_2
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-static {v0}, Lcom/tkay/core/common/l/a/f;->c(Lcom/tkay/core/common/l/a/f;)Lcom/tkay/core/common/l/a/f$d;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 300
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-static {v0}, Lcom/tkay/core/common/l/a/f;->c(Lcom/tkay/core/common/l/a/f;)Lcom/tkay/core/common/l/a/f$d;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/l/a/f$c;->b:Ljava/util/ArrayList;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/l/a/f$d;->a(Ljava/util/List;)V

    .line 304
    :cond_3
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f$c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 305
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f$c;->c:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 307
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f$c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-static {v0}, Lcom/tkay/core/common/l/a/f;->d(Lcom/tkay/core/common/l/a/f;)Z

    return-void
.end method
