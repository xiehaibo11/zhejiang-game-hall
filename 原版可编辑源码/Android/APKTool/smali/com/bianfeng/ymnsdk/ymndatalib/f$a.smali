.class public Lcom/bianfeng/ymnsdk/ymndatalib/f$a;
.super Ljava/lang/Object;
.source "PostDatalibUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Ljava/lang/String;

.field public final synthetic b:Ljava/lang/String;

.field public final synthetic c:Lcom/bianfeng/ymnsdk/ymndatalib/f;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/f;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;->c:Lcom/bianfeng/ymnsdk/ymndatalib/f;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 9

    .line 1
    invoke-static {}, Lcom/bianfeng/datafunsdk/PostDatalib;->getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;

    move-result-object v0

    new-instance v8, Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;->c:Lcom/bianfeng/ymnsdk/ymndatalib/f;

    .line 2
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Lcom/bianfeng/ymnsdk/ymndatalib/f;)Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v7, 0x0

    move-object v1, v8

    invoke-direct/range {v1 .. v7}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    invoke-virtual {v0, v8}, Lcom/bianfeng/datafunsdk/PostDatalib;->postByteData(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method
