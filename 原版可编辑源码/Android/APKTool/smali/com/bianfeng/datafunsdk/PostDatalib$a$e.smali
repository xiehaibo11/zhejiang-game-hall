.class public Lcom/bianfeng/datafunsdk/PostDatalib$a$e;
.super Ljava/lang/Object;
.source "PostDatalib.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/PostDatalib$a;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/PostDatalib$a;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/PostDatalib$a;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$e;->a:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 1
    const-string v0, "PostDatalib \u67e5\u8be2\u5f00\u59cb--"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib$a$e;->a:Lcom/bianfeng/datafunsdk/PostDatalib$a;

    iget-object v0, v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;->a:Lcom/bianfeng/datafunsdk/PostDatalib;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/PostDatalib;->access$300(Lcom/bianfeng/datafunsdk/PostDatalib;)V

    return-void
.end method
