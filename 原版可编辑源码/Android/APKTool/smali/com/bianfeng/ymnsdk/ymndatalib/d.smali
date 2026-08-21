.class public Lcom/bianfeng/ymnsdk/ymndatalib/d;
.super Ljava/lang/Object;
.source "PayBean.java"


# instance fields
.field public a:Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;

.field public d:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->a:Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->b:Ljava/lang/String;

    .line 4
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->c:Ljava/lang/String;

    .line 5
    iput-object p4, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->d:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->a:Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    return-object v0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->b:Ljava/lang/String;

    return-object v0
.end method

.method public c()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->d:Ljava/lang/String;

    return-object v0
.end method

.method public d()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/d;->c:Ljava/lang/String;

    return-object v0
.end method
