.class Lcom/bianfeng/seppellita/SepperllitaSdk$1;
.super Ljava/lang/Object;
.source "SepperllitaSdk.java"

# interfaces
.implements Lcom/bianfeng/seppellita/SepperllitaCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/seppellita/SepperllitaSdk;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;


# direct methods
.method constructor <init>(Lcom/bianfeng/seppellita/SepperllitaSdk;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public callTime()V
    .locals 1

    const-string v0, "callTime---->\u5b9a\u65f6\u64cd\u4f5c"

    .line 129
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 130
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$900(Lcom/bianfeng/seppellita/SepperllitaSdk;)V

    return-void
.end method

.method public onDel()V
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 143
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->setTimer()V

    :cond_0
    return-void
.end method

.method public onInitFail(Ljava/lang/String;)V
    .locals 2

    .line 117
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onInitFail--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 118
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 119
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->onInit(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V

    .line 121
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$800(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 122
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$800(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;->onFail(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public onInitSuc(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V
    .locals 2

    const-string v0, "onInitSuc--->"

    .line 104
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 105
    invoke-static {}, Lcom/bianfeng/seppellita/net/UrlManager;->getInstance()Lcom/bianfeng/seppellita/net/UrlManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getSevrer_list()Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/seppellita/net/UrlManager;->setUrls(Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;)V

    .line 106
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 107
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->onInit(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V

    .line 109
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$700(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/manager/IPolicysManager;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$700(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/manager/IPolicysManager;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/manager/IPolicysManager;->setPolicysBean(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V

    .line 110
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$800(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 111
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$800(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;->onSuc()V

    :cond_2
    return-void
.end method

.method public onInsertSuccess()V
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 136
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->setTimer()V

    :cond_0
    return-void
.end method

.method public onPostFail(Ljava/lang/String;)V
    .locals 2

    .line 96
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPostFail---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 97
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 98
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->setTimer()V

    :cond_0
    return-void
.end method

.method public onPostSuc(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 90
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPostSuc--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 91
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$500(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/db/DBManager;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/seppellita/db/DBManager;->del(Ljava/util/List;)V

    return-void
.end method

.method public onSelectSuc(Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 59
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onSelectSuc---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 60
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 61
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    move v3, v2

    .line 62
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 63
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    const-string v5, "P1182"

    .line 64
    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 65
    invoke-interface {v1, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 67
    :cond_0
    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 70
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$000(Lcom/bianfeng/seppellita/SepperllitaSdk;)Z

    move-result p1

    if-nez p1, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_2

    .line 71
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1, v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$100(Lcom/bianfeng/seppellita/SepperllitaSdk;Ljava/util/List;)V

    goto :goto_2

    .line 73
    :cond_2
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$200(Lcom/bianfeng/seppellita/SepperllitaSdk;)Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {v4}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$300(Lcom/bianfeng/seppellita/SepperllitaSdk;)Ljava/lang/String;

    move-result-object v4

    invoke-static {p1, v3, v0, v4}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$400(Lcom/bianfeng/seppellita/SepperllitaSdk;Landroid/content/Context;Ljava/util/List;Ljava/lang/String;)V

    .line 75
    :goto_2
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_3

    .line 76
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$200(Lcom/bianfeng/seppellita/SepperllitaSdk;)Landroid/content/Context;

    move-result-object v0

    const-string v3, "S011"

    invoke-static {p1, v0, v1, v3}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$400(Lcom/bianfeng/seppellita/SepperllitaSdk;Landroid/content/Context;Ljava/util/List;Ljava/lang/String;)V

    .line 85
    :cond_3
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;->this$0:Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-static {p1, v2}, Lcom/bianfeng/seppellita/SepperllitaSdk;->access$002(Lcom/bianfeng/seppellita/SepperllitaSdk;Z)Z

    return-void
.end method
