.class final Lcom/mbridge/msdk/click/a$1;
.super Ljava/lang/Object;
.source "ApkActive.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Ljava/lang/String;

.field final synthetic g:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/mbridge/msdk/click/a$1;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/mbridge/msdk/click/a$1;->b:Landroid/content/Context;

    iput-object p3, p0, Lcom/mbridge/msdk/click/a$1;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/click/a$1;->d:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/click/a$1;->e:Ljava/lang/String;

    iput-object p6, p0, Lcom/mbridge/msdk/click/a$1;->f:Ljava/lang/String;

    iput-object p7, p0, Lcom/mbridge/msdk/click/a$1;->g:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 10

    .line 55
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/a$1;->a:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/c;->f(Landroid/content/Context;Ljava/lang/String;)V

    .line 56
    iget-object v2, p0, Lcom/mbridge/msdk/click/a$1;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/click/a$1;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/click/a$1;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/click/a$1;->a:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/click/a$1;->e:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/click/a$1;->f:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/click/a$1;->g:Ljava/lang/String;

    const/4 v6, 0x1

    invoke-static/range {v2 .. v9}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 8

    .line 61
    iget-object v0, p0, Lcom/mbridge/msdk/click/a$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/click/a$1;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/click/a$1;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/click/a$1;->a:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/click/a$1;->e:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/click/a$1;->f:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/click/a$1;->g:Ljava/lang/String;

    const/4 v4, 0x0

    invoke-static/range {v0 .. v7}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final c()V
    .locals 0

    .line 65
    invoke-virtual {p0}, Lcom/mbridge/msdk/click/a$1;->a()V

    return-void
.end method
