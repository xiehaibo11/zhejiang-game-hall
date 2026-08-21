.class public Lcom/bianfeng/ymnsdk/ymndatalib/e;
.super Ljava/lang/Object;
.source "PluginBean.java"


# instance fields
.field public a:Ljava/lang/String;

.field public b:Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

.field public c:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const-string p3, ""

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->a:Ljava/lang/String;

    .line 12
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->b:Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    .line 13
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->a:Ljava/lang/String;

    .line 17
    iput-object p6, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->b:Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    return-object v0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    const-string v0, ""

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->c:Ljava/lang/String;

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->c:Ljava/lang/String;

    return-object v0
.end method

.method public c()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/e;->a:Ljava/lang/String;

    return-object v0
.end method
