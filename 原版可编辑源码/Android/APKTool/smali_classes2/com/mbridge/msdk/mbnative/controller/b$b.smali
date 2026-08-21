.class public final Lcom/mbridge/msdk/mbnative/controller/b$b;
.super Ljava/lang/Object;
.source "NativePreloadController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbnative/controller/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbnative/controller/b;

.field private b:I

.field private c:Lcom/mbridge/msdk/foundation/same/e/d;

.field private d:I

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Lcom/mbridge/msdk/b/a/a;

.field private h:Z

.field private i:Lcom/mbridge/msdk/out/AdMobClickListener;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b;ILcom/mbridge/msdk/foundation/same/e/d;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1111
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    .line 1080
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->h:Z

    .line 1112
    iput p2, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->b:I

    .line 1113
    iput-object p3, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->c:Lcom/mbridge/msdk/foundation/same/e/d;

    .line 1114
    iput p4, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->d:I

    .line 1115
    iput-object p5, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->e:Ljava/lang/String;

    .line 1116
    iput-object p6, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->f:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/b/a/a;)V
    .locals 0

    .line 1092
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->g:Lcom/mbridge/msdk/b/a/a;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 0

    .line 1084
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->i:Lcom/mbridge/msdk/out/AdMobClickListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 1100
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->e:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 1088
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->h:Z

    return-void
.end method

.method public final run()V
    .locals 9

    .line 1121
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->f()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "cancel task adsource is = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->b:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1122
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->c:Lcom/mbridge/msdk/foundation/same/e/d;

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/foundation/same/e/d;->a(Z)V

    .line 1123
    iget v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->b:I

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 1131
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->d:I

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->e:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->f:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->g:Lcom/mbridge/msdk/b/a/a;

    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->i:Lcom/mbridge/msdk/out/AdMobClickListener;

    const-string v3, "REQUEST_TIMEOUT"

    invoke-virtual/range {v2 .. v8}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    goto :goto_0

    .line 1125
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;Z)Z

    .line 1126
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->h:Z

    if-nez v0, :cond_2

    iget v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->d:I

    if-ne v0, v1, :cond_3

    .line 1127
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->d:I

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->e:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->f:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->g:Lcom/mbridge/msdk/b/a/a;

    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/b$b;->i:Lcom/mbridge/msdk/out/AdMobClickListener;

    const-string v3, "REQUEST_TIMEOUT"

    invoke-virtual/range {v2 .. v8}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    :cond_3
    :goto_0
    return-void
.end method
