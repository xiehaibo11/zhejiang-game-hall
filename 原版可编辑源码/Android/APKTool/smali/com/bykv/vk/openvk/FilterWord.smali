.class public interface abstract Lcom/bykv/vk/openvk/FilterWord;
.super Ljava/lang/Object;


# virtual methods
.method public abstract addOption(Lcom/bykv/vk/openvk/FilterWord;)V
.end method

.method public abstract getId()Ljava/lang/String;
.end method

.method public abstract getIsSelected()Z
.end method

.method public abstract getName()Ljava/lang/String;
.end method

.method public abstract getOptions()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/FilterWord;",
            ">;"
        }
    .end annotation
.end method

.method public abstract hasSecondOptions()Z
.end method

.method public abstract isValid()Z
.end method

.method public abstract setIsSelected(Z)V
.end method
