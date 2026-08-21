.class final Lcom/bytedance/pangle/plugin/b$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/pangle/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bytedance/pangle/plugin/b$2;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bytedance/pangle/plugin/b$2;


# direct methods
.method constructor <init>(Lcom/bytedance/pangle/plugin/b$2;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/bytedance/pangle/plugin/b$2$2;->a:Lcom/bytedance/pangle/plugin/b$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 108
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/b$2$2;->a:Lcom/bytedance/pangle/plugin/b$2;

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/b$2;->a:Ljava/io/File;

    iget-object v1, p0, Lcom/bytedance/pangle/plugin/b$2$2;->a:Lcom/bytedance/pangle/plugin/b$2;

    iget-object v1, v1, Lcom/bytedance/pangle/plugin/b$2;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/bytedance/pangle/plugin/b$2$2;->a:Lcom/bytedance/pangle/plugin/b$2;

    iget v2, v2, Lcom/bytedance/pangle/plugin/b$2;->c:I

    iget-object v3, p0, Lcom/bytedance/pangle/plugin/b$2$2;->a:Lcom/bytedance/pangle/plugin/b$2;

    iget-object v3, v3, Lcom/bytedance/pangle/plugin/b$2;->d:Ljava/lang/StringBuffer;

    invoke-static {v0, v1, v2, v3}, Lcom/bytedance/pangle/plugin/b;->e(Ljava/io/File;Ljava/lang/String;ILjava/lang/StringBuffer;)V

    return-void
.end method
