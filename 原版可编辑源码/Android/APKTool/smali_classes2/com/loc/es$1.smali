.class final Lcom/loc/es$1;
.super Ljava/lang/Object;
.source "CollectionManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/loc/es;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/es;


# direct methods
.method constructor <init>(Lcom/loc/es;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/es$1;->a:Lcom/loc/es;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/loc/es$1;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->d:Lcom/loc/dw;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/es$1;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/es$1;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    invoke-virtual {v0}, Lcom/loc/ff;->a()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static {v0}, Lcom/loc/dw;->b(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    const-string v1, "cl"

    const-string v2, "upwr"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
