package com.bianfeng.addpermission.ui;

import android.content.Context;
import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.bianfeng.addpermission.common.ResourceManger;
import java.util.List;

public class ShowPermissionAdapter extends RecyclerView.Adapter<ItemViewHolder> {
    private Context context;
    private List<PermissionBean> data;

    public ShowPermissionAdapter(List<PermissionBean> list, Context context) {
        this.data = list;
        this.context = context;
    }

    @Override
    public ItemViewHolder onCreateViewHolder(ViewGroup viewGroup, int i) {
        return new ItemViewHolder(LayoutInflater.from(viewGroup.getContext()).inflate(ResourceManger.getId(viewGroup.getContext(), "R.layout.adapter_show_permission_list"), viewGroup, false));
    }

    @Override
    public void onBindViewHolder(final ItemViewHolder itemViewHolder, int i) {
        final PermissionBean permissionBean = this.data.get(i);
        itemViewHolder.name.setText(permissionBean.getName());
        itemViewHolder.notity.setText(permissionBean.getNotity());
        final String isok = permissionBean.getIsok();
        if (!"1".equals(isok)) {
            if ("0".equals(isok)) {
                itemViewHolder.imageView.setImageResource(ResourceManger.getId(this.context, "R.drawable.show_permission_open"));
            } else {
                itemViewHolder.imageView.setVisibility(8);
            }
        } else {
            itemViewHolder.imageView.setImageResource(ResourceManger.getId(this.context, "R.drawable.show_permission_close"));
        }
        itemViewHolder.imageView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if ("1".equals(isok)) {
                    permissionBean.setIsok("0");
                    itemViewHolder.imageView.setImageResource(ResourceManger.getId(ShowPermissionAdapter.this.context, "R.drawable.show_permission_open"));
                } else {
                    permissionBean.setIsok("1");
                    itemViewHolder.imageView.setImageResource(ResourceManger.getId(ShowPermissionAdapter.this.context, "R.drawable.show_permission_close"));
                }
                ShowPermissionAdapter.this.notifyDataSetChanged();
            }
        });
    }

    @Override
    public int getItemCount() {
        return this.data.size();
    }

    public static class ItemViewHolder extends RecyclerView.ViewHolder {
        private ImageView imageView;
        private TextView name;
        private TextView notity;

        public ItemViewHolder(View view) {
            super(view);
            this.imageView = (ImageView) view.findViewById(ResourceManger.getId(view.getContext(), "R.id.adapter_show_permission_check"));
            this.name = (TextView) view.findViewById(ResourceManger.getId(view.getContext(), "R.id.adapter_show_permission_name"));
            this.notity = (TextView) view.findViewById(ResourceManger.getId(view.getContext(), "R.id.adapter_show_permission_notity"));
        }
    }
}
