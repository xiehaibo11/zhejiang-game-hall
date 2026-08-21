.class final Lcom/tkay/expressad/exoplayer/ad$a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/SurfaceHolder$Callback;
.implements Landroid/view/TextureView$SurfaceTextureListener;
.implements Lcom/tkay/expressad/exoplayer/b/g;
.implements Lcom/tkay/expressad/exoplayer/g/f;
.implements Lcom/tkay/expressad/exoplayer/l/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/ad;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/ad;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/ad;)V
    .locals 0

    .line 979
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/ad;B)V
    .locals 0

    .line 979
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/ad$a;-><init>(Lcom/tkay/expressad/exoplayer/ad;)V

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 2

    .line 1063
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;I)I

    .line 1064
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->d(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/b/g;

    .line 1065
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/b/g;->a(I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(IIIF)V
    .locals 2

    .line 1020
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/l/g;

    .line 1021
    invoke-interface {v1, p1, p2}, Lcom/tkay/expressad/exoplayer/l/g;->a(II)V

    goto :goto_0

    .line 1024
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/l/h;

    .line 1025
    invoke-interface {v1, p1, p2, p3, p4}, Lcom/tkay/expressad/exoplayer/l/h;->a(IIIF)V

    goto :goto_1

    :cond_1
    return-void
.end method

.method public final a(IJ)V
    .locals 2

    .line 1012
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/l/h;

    .line 1013
    invoke-interface {v1, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/l/h;->a(IJ)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(IJJ)V
    .locals 8

    .line 1089
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->d(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v2, v1

    check-cast v2, Lcom/tkay/expressad/exoplayer/b/g;

    move v3, p1

    move-wide v4, p2

    move-wide v6, p4

    .line 1090
    invoke-interface/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/b/g;->a(IJJ)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Landroid/view/Surface;)V
    .locals 2

    .line 1032
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->c(Lcom/tkay/expressad/exoplayer/ad;)Landroid/view/Surface;

    move-result-object v0

    if-ne v0, p1, :cond_0

    .line 1033
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    .line 1037
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/l/h;

    .line 1038
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/l/h;->a(Landroid/view/Surface;)V

    goto :goto_1

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 2

    .line 987
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/c/d;)Lcom/tkay/expressad/exoplayer/c/d;

    .line 988
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/l/h;

    .line 989
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/l/h;->a(Lcom/tkay/expressad/exoplayer/c/d;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/g/a;)V
    .locals 2

    .line 1118
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->e(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/g/f;

    .line 1119
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/g/f;->a(Lcom/tkay/expressad/exoplayer/g/a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 2

    .line 1004
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/m;

    .line 1005
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/l/h;

    .line 1006
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/l/h;->a(Lcom/tkay/expressad/exoplayer/m;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;JJ)V
    .locals 8

    .line 996
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v2, v1

    check-cast v2, Lcom/tkay/expressad/exoplayer/l/h;

    move-object v3, p1

    move-wide v4, p2

    move-wide v6, p4

    .line 997
    invoke-interface/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/l/h;->a(Ljava/lang/String;JJ)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 2

    .line 1044
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/l/h;

    .line 1045
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/l/h;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    goto :goto_0

    .line 1047
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/m;

    .line 1048
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/c/d;)Lcom/tkay/expressad/exoplayer/c/d;

    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 2

    .line 1080
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/m;

    .line 1081
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->d(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/b/g;

    .line 1082
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/b/g;->b(Lcom/tkay/expressad/exoplayer/m;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;JJ)V
    .locals 8

    .line 1072
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->d(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v2, v1

    check-cast v2, Lcom/tkay/expressad/exoplayer/b/g;

    move-object v3, p1

    move-wide v4, p2

    move-wide v6, p4

    .line 1073
    invoke-interface/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/b/g;->b(Ljava/lang/String;JJ)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final c(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 2

    .line 1055
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/c/d;)Lcom/tkay/expressad/exoplayer/c/d;

    .line 1056
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->d(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/b/g;

    .line 1057
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/b/g;->c(Lcom/tkay/expressad/exoplayer/c/d;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final d(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 2

    .line 1096
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/ad;->d(Lcom/tkay/expressad/exoplayer/ad;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/b/g;

    .line 1097
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/b/g;->d(Lcom/tkay/expressad/exoplayer/c/d;)V

    goto :goto_0

    .line 1099
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/m;

    .line 1100
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/ad;Lcom/tkay/expressad/exoplayer/c/d;)Lcom/tkay/expressad/exoplayer/c/d;

    .line 1101
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;I)I

    return-void
.end method

.method public final onSurfaceTextureAvailable(Landroid/graphics/SurfaceTexture;II)V
    .locals 0

    .line 1144
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    new-instance p3, Landroid/view/Surface;

    invoke-direct {p3, p1}, Landroid/view/Surface;-><init>(Landroid/graphics/SurfaceTexture;)V

    const/4 p1, 0x1

    invoke-static {p2, p3, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Landroid/view/Surface;Z)V

    return-void
.end method

.method public final onSurfaceTextureDestroyed(Landroid/graphics/SurfaceTexture;)Z
    .locals 2

    .line 1154
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Landroid/view/Surface;Z)V

    return v0
.end method

.method public final onSurfaceTextureSizeChanged(Landroid/graphics/SurfaceTexture;II)V
    .locals 0

    return-void
.end method

.method public final onSurfaceTextureUpdated(Landroid/graphics/SurfaceTexture;)V
    .locals 0

    return-void
.end method

.method public final surfaceChanged(Landroid/view/SurfaceHolder;III)V
    .locals 0

    return-void
.end method

.method public final surfaceCreated(Landroid/view/SurfaceHolder;)V
    .locals 2

    .line 1127
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    invoke-interface {p1}, Landroid/view/SurfaceHolder;->getSurface()Landroid/view/Surface;

    move-result-object p1

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Landroid/view/Surface;Z)V

    return-void
.end method

.method public final surfaceDestroyed(Landroid/view/SurfaceHolder;)V
    .locals 2

    .line 1137
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/ad$a;->a:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/ad;Landroid/view/Surface;Z)V

    return-void
.end method
