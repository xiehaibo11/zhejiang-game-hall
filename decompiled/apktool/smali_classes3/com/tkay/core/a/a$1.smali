.class final Lcom/tkay/core/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/a/a;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/a/a;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/core/a/a$1;->a:Lcom/tkay/core/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 58
    iget-object v0, p0, Lcom/tkay/core/a/a$1;->a:Lcom/tkay/core/a/a;

    iget-object v0, v0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    iget-object v1, p0, Lcom/tkay/core/a/a$1;->a:Lcom/tkay/core/a/a;

    iget-object v1, v1, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    new-instance v2, Ljava/util/Date;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-direct {v2, v3, v4}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v1, v2}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/c/l;->a(Ljava/lang/String;)V

    return-void
.end method
