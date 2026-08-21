.class final Lcom/bytedance/pangle/plugin/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/pangle/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bytedance/pangle/plugin/b;->a(Ljava/io/File;Ljava/lang/String;I)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/io/File;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:I

.field final synthetic d:Ljava/lang/StringBuffer;


# direct methods
.method constructor <init>(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/bytedance/pangle/plugin/b$2;->a:Ljava/io/File;

    iput-object p2, p0, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iput p3, p0, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iput-object p4, p0, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 5

    .line 86
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/b$2;->a:Ljava/io/File;

    iget-object v1, p0, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iget v2, p0, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iget-object v3, p0, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-static {v0, v1, v2, v3}, Lcom/bytedance/pangle/plugin/b;->b(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/util/Map;

    move-result-object v0

    .line 89
    iget-object v1, p0, Lcom/bytedance/pangle/plugin/b$2;->a:Ljava/io/File;

    iget-object v2, p0, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iget v3, p0, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iget-object v4, p0, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-static {v1, v2, v3, v4}, Lcom/bytedance/pangle/plugin/b;->c(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V

    .line 92
    iget-object v1, p0, Lcom/bytedance/pangle/plugin/b$2;->a:Ljava/io/File;

    iget-object v2, p0, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iget v3, p0, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iget-object v4, p0, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-static {v1, v2, v3, v4}, Lcom/bytedance/pangle/plugin/b;->d(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)Ljava/lang/String;

    move-result-object v1

    .line 95
    iget-object v2, p0, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iget v3, p0, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iget-object v4, p0, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-static {v1, v2, v3, v4}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/StringBuffer;)V

    .line 97
    invoke-static {}, Lcom/bytedance/pangle/util/i;->e()Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {}, Lcom/bytedance/pangle/util/i;->b()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 113
    :cond_0
    iget-object v1, p0, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iget v2, p0, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iget-object v3, p0, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-static {v1, v2, v0, v3}, Lcom/bytedance/pangle/plugin/b;->a(Ljava/lang/String;ILjava/util/Map;Ljava/lang/StringBuffer;)V

    .line 116
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/b$2;->a:Ljava/io/File;

    iget-object v1, p0, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iget v2, p0, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iget-object v3, p0, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-static {v0, v1, v2, v3}, Lcom/bytedance/pangle/plugin/b;->e(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V

    return-void

    :cond_1
    :goto_0
    const/4 v1, 0x2

    new-array v1, v1, [Lcom/bytedance/pangle/a/a$a;

    const/4 v2, 0x0

    .line 98
    new-instance v3, Lcom/bytedance/pangle/plugin/b$2$1;

    invoke-direct {v3, p0, v0}, Lcom/bytedance/pangle/plugin/b$2$1;-><init>(Lcom/bytedance/pangle/plugin/b$2;Ljava/util/Map;)V

    aput-object v3, v1, v2

    const/4 v0, 0x1

    new-instance v2, Lcom/bytedance/pangle/plugin/b$2$2;

    invoke-direct {v2, p0}, Lcom/bytedance/pangle/plugin/b$2$2;-><init>(Lcom/bytedance/pangle/plugin/b$2;)V

    aput-object v2, v1, v0

    invoke-static {v1}, Lcom/bytedance/pangle/a/a;->a([Lcom/bytedance/pangle/a/a$a;)V

    return-void
.end method
