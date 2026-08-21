.class final Lcom/tkay/china/common/service/ApkDownloadService$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/common/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/service/ApkDownloadService;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/common/service/ApkDownloadService;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/service/ApkDownloadService;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/china/common/a/e;J)V
    .locals 2

    .line 86
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-static {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->a(Lcom/tkay/china/common/service/ApkDownloadService;)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-static {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->a(Lcom/tkay/china/common/service/ApkDownloadService;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 89
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-virtual {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/a;->c(Ljava/lang/String;)Lcom/tkay/china/common/a/a$a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 91
    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;J)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;JJ)V
    .locals 8

    .line 78
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-virtual {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/a;->c(Ljava/lang/String;)Lcom/tkay/china/common/a/a$a;

    move-result-object v2

    if-eqz v2, :cond_0

    move-object v3, p1

    move-wide v4, p2

    move-wide v6, p4

    .line 80
    invoke-interface/range {v2 .. v7}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;JJ)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;JJI)V
    .locals 9

    .line 116
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-static {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->a(Lcom/tkay/china/common/service/ApkDownloadService;)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 117
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-static {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->a(Lcom/tkay/china/common/service/ApkDownloadService;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 119
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-virtual {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/a;->c(Ljava/lang/String;)Lcom/tkay/china/common/a/a$a;

    move-result-object v2

    if-eqz v2, :cond_1

    move-object v3, p1

    move-wide v4, p2

    move-wide v6, p4

    move v8, p6

    .line 121
    invoke-interface/range {v2 .. v8}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;JJI)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;Ljava/lang/String;)V
    .locals 2

    .line 105
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-static {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->a(Lcom/tkay/china/common/service/ApkDownloadService;)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 106
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-static {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->a(Lcom/tkay/china/common/service/ApkDownloadService;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 108
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-virtual {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/a;->c(Ljava/lang/String;)Lcom/tkay/china/common/a/a$a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 110
    invoke-interface {v0, p1, p2}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final b(Lcom/tkay/china/common/a/e;JJ)V
    .locals 8

    .line 97
    iget-object v0, p0, Lcom/tkay/china/common/service/ApkDownloadService$1;->a:Lcom/tkay/china/common/service/ApkDownloadService;

    invoke-virtual {v0}, Lcom/tkay/china/common/service/ApkDownloadService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/a;->c(Ljava/lang/String;)Lcom/tkay/china/common/a/a$a;

    move-result-object v2

    if-eqz v2, :cond_0

    move-object v3, p1

    move-wide v4, p2

    move-wide v6, p4

    .line 99
    invoke-interface/range {v2 .. v7}, Lcom/tkay/china/common/a/a$a;->b(Lcom/tkay/china/common/a/e;JJ)V

    :cond_0
    return-void
.end method
