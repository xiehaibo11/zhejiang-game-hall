.class final Lcom/tkay/core/common/a/j$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a/j;->a(Ljava/lang/String;Ljava/lang/String;JJIZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:J

.field final synthetic d:J

.field final synthetic e:I

.field final synthetic f:Lcom/tkay/core/common/a/j;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/a/j;Ljava/lang/String;Ljava/lang/String;JJI)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/tkay/core/common/a/j$3;->f:Lcom/tkay/core/common/a/j;

    iput-object p2, p0, Lcom/tkay/core/common/a/j$3;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/a/j$3;->b:Ljava/lang/String;

    iput-wide p4, p0, Lcom/tkay/core/common/a/j$3;->c:J

    iput-wide p6, p0, Lcom/tkay/core/common/a/j$3;->d:J

    iput p8, p0, Lcom/tkay/core/common/a/j$3;->e:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    .line 109
    iget-object v0, p0, Lcom/tkay/core/common/a/j$3;->f:Lcom/tkay/core/common/a/j;

    invoke-static {v0}, Lcom/tkay/core/common/a/j;->a(Lcom/tkay/core/common/a/j;)Lcom/tkay/core/common/c/m;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/a/j$3;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/common/a/j$3;->b:Ljava/lang/String;

    iget-wide v4, p0, Lcom/tkay/core/common/a/j$3;->c:J

    iget-wide v6, p0, Lcom/tkay/core/common/a/j$3;->d:J

    iget v8, p0, Lcom/tkay/core/common/a/j$3;->e:I

    invoke-virtual/range {v1 .. v8}, Lcom/tkay/core/common/c/m;->a(Ljava/lang/String;Ljava/lang/String;JJI)V

    return-void
.end method
