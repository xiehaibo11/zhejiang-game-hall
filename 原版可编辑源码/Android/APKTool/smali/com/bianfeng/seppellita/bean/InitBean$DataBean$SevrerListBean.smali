.class public Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;
.super Ljava/lang/Object;
.source "InitBean.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/seppellita/bean/InitBean$DataBean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "SevrerListBean"
.end annotation


# instance fields
.field private action:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 124
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getAction()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 128
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;->action:Ljava/util/List;

    return-object v0
.end method

.method public setAction(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 132
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;->action:Ljava/util/List;

    return-void
.end method
